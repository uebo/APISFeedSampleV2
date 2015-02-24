//
//  APISAppUser.h
//  AppiariesSDK
//
//  Created by Appiaries Corporation on 2014/09/05.
//  Copyright (c) 2014 Appiaries Corporation. All rights reserved.
//


/**
 * アプリユーザ・オブジェクト
 * @since AppiariesSDK 1.2.0
 */
@interface APISAppUser : NSObject <NSCopying, NSCoding>
#pragma mark - Properties
/** @name Properties */
/**
 * アプリユーザID
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSString *id;
/**
 * アプリユーザのログインID
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSString *loginId;
/**
 * アプリユーザのログインパスワード
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSString *password;
/**
 * アプリユーザのメールアドレス
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSString *email;
/**
 * アプリユーザのカスタム属性
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSDictionary *attributes;
/**
 * アプリユーザの削除対象カスタム属性リスト
 * @warning アプリユーザのカスタム属性から任意属性を削除する際に指定します。
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSArray *unsetAttributes;
/**
 * アプリユーザのストアトークン
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSString *storeToken;

#pragma mark - Initialization
/** @name Initialization */
/**
 * 指定イニシャライザ
 * @brief ディクショナリから APISAppUser オブジェクトを生成して返します。
 * @param dictionary APISAppUser のプロパティにマッピングする、プロパティ名をキーとしたディクショナリ
 * @return APISAppUser オブジェクト
 * @since AppiariesSDK 1.2.0
 */
- (id)initFromDictionary:(NSDictionary *)dictionary;
/**
 * 指定イニシャライザ
 * @brief ディクショナリから APISAppUser オブジェクトを生成して返します。
 * @param dictionary APISAppUser のプロパティにマッピングする、プロパティ名をキーとしたディクショナリ
 * @param map 引数dictionaryのキーを変換するためのディクショナリ（キーがプロパティ名、値がdictionaryのキー名となります）
 * @return APISAppUser オブジェクト
 * @since AppiariesSDK 1.2.0
 */
- (id)initFromDictionary:(NSDictionary *)dictionary map:(NSDictionary *)map;

@end
