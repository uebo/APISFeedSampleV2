//
//  CollectionViewCell.h
//  APISFeedSample
//
//  Created by 植田 洋次 on 2014/10/15.
//  Copyright (c) 2014年 Yoji Ueda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *mainImageView;
@property (weak, nonatomic) IBOutlet UILabel *commentLabel;

@end
