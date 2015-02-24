//
//  NSUserDefaults+AppiariesSDK.h
//  AppiariesSDK
//
//  Created by Appiaries Corporation on 2014/08/11.
//  Copyright (c) 2014 Appiaries Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class APISAppUser;

/**
 * AppiariesSDK用 NSUserDefaults 拡張カテゴリ
 * @since AppiariesSDK 1.2.0
 */
@interface NSUserDefaults (AppiariesSDK)
#pragma mark - Extension methods
/** @name Extension methods */
/**
 * AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)から削除する
 * @brief AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)から削除します。
 * @param key キー
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisRemoveObjectForKey:(NSString *)key;
/**
 * AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)へ保存する
 * @brief AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)へ保存します。
 * @param value 値
 * @param key キー
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveStringValue:(NSString *)value forKey:(NSString *)key;
/**
 * AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)からロードする
 * @brief AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)からロードします。
 * @param key キー
 * @return 値
 * @since AppiariesSDK 1.2.0
 */
+ (NSString *)apisLoadStringValueForKey:(NSString *)key;
/**
 * AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)へ保存する
 * @brief AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)へ保存します。
 * @param value 値
 * @param key キー
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveBoolValue:(BOOL)value forKey:(NSString *)key;
/**
 * AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)からロードする
 * @brief AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)からロードします。
 * @param key キー
 * @return 値
 * @since AppiariesSDK 1.2.0
 */
+ (BOOL)apisLoadBoolValueForKey:(NSString *)key;
/**
 * AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)へ保存する
 * @brief AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)へ保存します。
 * @param object 値
 * @param key キー
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveObject:(id)object forKey:(NSString *)key;
/**
 * AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)からロードする
 * @brief AppiariesSDKの管理対象データをアプリ領域(/Library/Preferences)からロードします。
 * @param key キー
 * @return 値
 * @since AppiariesSDK 1.2.0
 */
+ (id)apisLoadObjectForKey:(NSString *)key;
/**
 * データストアIDをアプリ領域へ保存する
 * @brief データストアIDをアプリ領域へ保存します。
 * @param datastoreId データストアID
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveDatastoreId:(NSString *)datastoreId;
/**
 * データストアIDを端末のアプリ領域からロードする
 * @brief データストアIDを端末のアプリ領域からロードします。
 * @return データストアID
 * @since AppiariesSDK 1.2.0
 */
+ (NSString *)apisLoadDatastoreId;
/**
 * データストアIDを端末のアプリ領域から削除する
 * @brief データストアIDを端末のアプリ領域から削除します。
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisRemoveDatastoreId;
/**
 * アプリIDをアプリ領域へ保存する
 * @brief アプリIDをアプリ領域へ保存します。
 * @param applicationId アプリID
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveApplicationId:(NSString *)applicationId;
/**
 * アプリIDを端末のアプリ領域からロードする
 * @brief アプリIDを端末のアプリ領域からロードします。
 * @return アプリID
 * @since AppiariesSDK 1.2.0
 */
+ (NSString *)apisLoadApplicationId;
/**
 * アプリIDを端末のアプリ領域から削除する
 * @brief アプリIDを端末のアプリ領域から削除します。
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisRemoveApplicationId;
/**
 * アプリトークンをアプリ領域へ保存する
 * @brief アプリトークンをアプリ領域へ保存します。
 * @param applicationToken アプリトークン
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveApplicationToken:(NSString *)applicationToken;
/**
 * アプリトークンを端末のアプリ領域からロードする
 * @brief アプリトークンを端末のアプリ領域からロードします。
 * @return アプリトークン
 * @since AppiariesSDK 1.2.0
 */
+ (NSString *)apisLoadApplicationToken;
/**
 * アプリトークンを端末のアプリ領域から削除する
 * @brief アプリトークンを端末のアプリ領域から削除します。
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisRemoveApplicationToken;
/**
 * コレクションIDをアプリ領域へ保存する
 * @brief コレクションIDをアプリ領域へ保存します。
 * @param collectionId コレクションID
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveCollectionId:(NSString *)collectionId;
/**
 * コレクションIDを端末のアプリ領域からロードする
 * @brief コレクションIDを端末のアプリ領域からロードします。
 * @return コレクションID
 * @since AppiariesSDK 1.2.0
 */
+ (NSString *)apisLoadCollectionId;
/**
 * コレクションIDを端末のアプリ領域から削除する
 * @brief コレクションIDを端末のアプリ領域から削除します。
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisRemoveCollectionId;
/**
 * デバイストークンをアプリ領域へ保存する
 * @brief デバイストークンをアプリ領域へ保存します。
 * @param deviceToken デバイストークン
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveDeviceToken:(NSString *)deviceToken;
/**
 * デバイストークンを端末のアプリ領域からロードする
 * @brief デバイストークンを端末のアプリ領域からロードします。
 * @return デバイストークン
 * @since AppiariesSDK 1.2.0
 */
+ (NSString *)apisLoadDeviceToken;
/**
 * デバイストークンを端末のアプリ領域から削除する
 * @brief デバイストークンを端末のアプリ領域から削除します。
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisRemoveDeviceToken;
/**
 * デバイス属性をアプリ領域へ保存する
 * @brief デバイス属性をアプリ領域へ保存します。
 * @param attributes デバイス属性
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveDeviceAttributes:(NSString *)attributes;
/**
 * デバイス属性を端末のアプリ領域からロードする
 * @brief デバイス属性を端末のアプリ領域からロードします。
 * @return デバイス属性
 * @since AppiariesSDK 1.2.0
 */
+ (NSString *)apisLoadDeviceAttributes;
/**
 * デバイス属性を端末のアプリ領域から削除する
 * @brief デバイス属性を端末のアプリ領域から削除します。
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisRemoveDeviceAttributes;
/**
 * 自動ログインフラグをアプリ領域へ保存する
 * @brief 自動ログインフラグをアプリ領域へ保存します。
 * @param autoLogin 自動ログインフラグ
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveAutoLogin:(BOOL)autoLogin;
/**
 * 自動ログインフラグを端末のアプリ領域からロードする
 * @brief 自動ログインフラグを端末のアプリ領域からロードします。
 * @return 自動ログインフラグ
 * @since AppiariesSDK 1.2.0
 */
+ (BOOL)apisLoadAutoLogin;
/**
 * 自動ログインフラグを端末のアプリ領域から削除する
 * @brief 自動ログインフラグを端末のアプリ領域から削除します。
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisRemoveAutoLogin;
/**
 * アプリユーザをアプリ領域へ保存する
 * @brief アプリユーザをアプリ領域へ保存します。
 * @param appUser アプリユーザ
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisSaveAppUser:(APISAppUser *)appUser;
/**
 * アプリユーザを端末のアプリ領域からロードする
 * @brief アプリユーザを端末のアプリ領域からロードします。
 * @return アプリユーザ
 * @since AppiariesSDK 1.2.0
 */
+ (APISAppUser *)apisLoadAppUser;
/**
 * アプリユーザをアプリ領域から削除する
 * @brief アプリユーザをアプリ領域から削除します。
 * @since AppiariesSDK 1.2.0
 */
+ (void)apisRemoveAppUser;

@end