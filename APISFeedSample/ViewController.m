//
//  ViewController.m
//  APISFeedSample
//
//  Created by 植田 洋次 on 2014/11/05.
//  Copyright (c) 2014年 Yoji Ueda. All rights reserved.
//

#import "ViewController.h"
#import "CollectionViewCell.h"
//FIXME: AppiariesSDKをimportする
//#import <AppiariesSDK/AppiariesSDK.h>

@interface ViewController ()<UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

@property (strong, nonatomic) UIRefreshControl *refreshControl;
//JSON APIから取得するデータを格納
@property (strong, nonatomic) NSArray *collections;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //配列を初期化
    self.collections = [[NSMutableArray alloc] init];
    
    //RefreshControl
    self.refreshControl = [[UIRefreshControl alloc] init];
    [self.refreshControl addTarget:self action:@selector(refreshAction:) forControlEvents:UIControlEventValueChanged];
    [self.collectionView addSubview:self.refreshControl];
    self.collectionView.alwaysBounceVertical = YES;
    
    [self refreshAction:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - UICollectionViewDataSource
-(NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return [self.collections count];
}

-(UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    CollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"Cell" forIndexPath:indexPath];
    
    //取り出し
    NSDictionary *dict = self.collections[(NSUInteger)indexPath.row];
    
    //cellのサイズ調整
    //http://stackoverflow.com/questions/24750158/autoresizing-issue-of-uicollectionviewcell-contentviews-frame-in-storyboard-pro
    cell.contentView.frame = cell.bounds;
    cell.contentView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    
    //cell画像（本来は画像データをキャッシュするのが好ましい）
    [cell.mainImageView setImage:nil];
    
    //画像データをFileオブジェクトから取得する
    //コレクションID
    NSString *collectionId = @"imageFile";
    
    //FIXME: APIClientオブジェクトの作成
//    APISFileAPIClient *api = [[APISSession sharedSession] createFileAPIClientWithCollectionId:collectionId];
//    [api retrieveBinaryObjectBinaryWithId:dict[@"imageObjectId"]
//        success:^(APISResponseObject *response) {
//            //レスポンスのバイナリデータを取得
//            UIImage *image = [[UIImage alloc]initWithData:(NSData*)response.data[@"_bin"]];
//            
//            //画像をCellに設定
//            [cell.mainImageView setImage:image];
//        } failure:^(NSError *error) {
//            NSLog(@"%@", error);
//        }
//    ];
    
    //テキスト
    cell.commentLabel.text = dict[@"comment"];
    
    return cell;
}

- (CGSize)collectionView:(UICollectionView*)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    CGFloat width = self.view.frame.size.width;
    return CGSizeMake(width, width);
}

#pragma mark - private
-(void)refreshAction:(id)sender
{
    [self.refreshControl beginRefreshing];
    [UIApplication sharedApplication].networkActivityIndicatorVisible = YES;
    
    //コレクションID
    NSString *collectionId = @"post";
    
    //FIXME: APIClientオブジェクトの作成
//    APISJsonAPIClient *api = [[APISSession sharedSession] createJsonAPIClientWithCollectionId:collectionId];
//
//    //JSON Dataの条件を指定します。今回は絞込条件なし
//    APISQueryCondition *query = [[APISQueryCondition alloc] init];
////    [query setEqualValue:@"" forKey:@""];
//    
//    //JSONオブジェクトを取得する
//    [api searchJsonObjectsWithQueryCondition:query
//        success:^(APISResponseObject *response) {
//            //responseオブジェクトの中身をデバッグ
//            NSLog(@"%@", response.data);
//            
//            //responseオブジェクトから、データを取得
//            NSArray *objs = [response.data objectForKey:@"_objs"];
//            
//            NSMutableArray *m = [NSMutableArray new];
//            for (NSDictionary *dict in objs) {
//                //配列にデータを追加
//                [m addObject:dict];
//            }
//            self.collections = [m mutableCopy];
//            
//            //テーブルを更新
//            [self.collectionView reloadData];
//            
//            [UIApplication sharedApplication].networkActivityIndicatorVisible = NO;
//            [self.refreshControl endRefreshing];
//            
//        } failure:^(NSError *error) {
//            NSLog(@"%@", error);
//            [UIApplication sharedApplication].networkActivityIndicatorVisible = NO;
//            [self.refreshControl endRefreshing];
//        }
//    ];
}

@end
