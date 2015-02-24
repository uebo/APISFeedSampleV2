//
//  APISAppUserAPIClient.h
//  AppiariesSDK
//
//  Created by Appiaries Corporation on 2014/08/11.
//  Copyright (c) 2014 Appiaries Corporation. All rights reserved.
//


@class APISQueryCondition;
@class APISResponseObject;
@class APISAppUser;
@class APISSession;

/**
 * アプリユーザAPIクラス
 * @discussion アプリユーザ（アプリ会員）を操作する際に使用します。
 * @since AppiariesSDK 1.2.0
 */
@interface APISAppUserAPIClient : NSObject
#pragma mark - Properties
/** @name Properties */
/**
 * データストアID
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSString *datastoreId;
/**
 * アプリID
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSString *applicationId;
/**
 * アプリトークン
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) NSString *applicationToken;
/**
 * アプリユーザ
 * @since AppiariesSDK 1.2.0
 */
@property (strong, nonatomic) APISAppUser *appUser;

#pragma mark - Initialization
/** @name Initialization */
/**
 * 指定イニシャライザ
 * @brief APISAppUserAPIClient オブジェクトを生成して返します。
 * @param session APISSessionオブジェクト
 * @return APISAppUserAPIClient オブジェクト
 * @since AppiariesSDK 1.2.0
 */
- (id)initWithSession:(APISSession *)session;

#pragma mark - APIs
/** @name APIs */
/**
 * アプリユーザ作成API
 * @brief アプリに紐づくアプリユーザを登録します。
 * @param loginId アプリユーザのログインID
 * @param password アプリユーザのパスワード
 * @param email アプリユーザのメールアドレス
 * @param attributes カスタム属性（アプリ制作者が任意に指定することができる属性群です）
 * @since AppiariesSDK 1.2.0
 */
- (void)createAppUserWithLoginId:(NSString *)loginId password:(NSString *)password email:(NSString *)email attributes:(NSDictionary *)attributes;
/**
 * アプリユーザ作成API
 * @brief アプリに紐づくアプリユーザを登録します。
 * @param loginId アプリユーザのログインID
 * @param password アプリユーザのパスワード
 * @param email アプリユーザのメールアドレス
 * @param attributes カスタム属性（アプリ制作者が任意に指定することができる属性群です）
 * @param target    コールバック先オブジェクト
 * @param action    コールバックハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)createAppUserWithLoginId:(NSString *)loginId password:(NSString *)password email:(NSString *)email attributes:(NSDictionary *)attributes target:(id)target action:(SEL)action;

/**
 * アプリユーザ作成API
 * @brief アプリに紐づくアプリユーザを登録します。
 * @param loginId アプリユーザのログインID
 * @param password アプリユーザのパスワード
 * @param email アプリユーザのメールアドレス
 * @param attributes カスタム属性（アプリ制作者が任意に指定することができる属性群です）
 * @param successHandler 成功時実行ハンドラ
 * @param failureHandler 失敗時実行ハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)createAppUserWithLoginId:(NSString *)loginId password:(NSString *)password email:(NSString *)email attributes:(NSDictionary *)attributes success:(void (^)(APISResponseObject *response))successHandler failure:(void(^)(NSError *error))failureHandler;
/**
 * アプリユーザ取得API
 * @brief アプリに紐づくアプリユーザを取得します。
 * @param appUserId アプリユーザID
 * @param target    コールバック先オブジェクト
 * @param action    コールバックハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)retrieveAppUserWithId:(NSString *)appUserId target:(id)target action:(SEL)action;
/**
 * アプリユーザ取得API
 * @brief アプリに紐づくアプリユーザを取得します。
 * @param appUserId アプリユーザID
 * @param successHandler 成功時実行ハンドラ
 * @param failureHandler 失敗時実行ハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)retrieveAppUserWithId:(NSString *)appUserId success:(void (^)(APISResponseObject *response))successHandler failure:(void(^)(NSError *error))failureHandler;
/**
 * アプリユーザ更新API
 * @brief アプリに紐づくアプリユーザを更新します。
 * @param appUser 更新対象のアプリユーザ・オブジェクト
 * @warning appUser.attributes から特定属性を削除する場合は、appUser.unsetAttributes に削除する属性を指定してください。
 * @since AppiariesSDK 1.2.0
 */
- (void)updateAppUser:(APISAppUser *)appUser;
/**
 * アプリユーザ更新API
 * @brief アプリに紐づくアプリユーザを更新します。
 * @param appUser 更新対象のアプリユーザ・オブジェクト
 * @param target    コールバック先オブジェクト
 * @param action    コールバックハンドラ
 * @warning appUser.attributes から特定属性を削除する場合は、appUser.unsetAttributes に削除する属性を指定してください。
 * @since AppiariesSDK 1.2.0
 */
- (void)updateAppUser:(APISAppUser *)appUser target:(id)target action:(SEL)action;
/**
 * アプリユーザ更新API
 * @brief アプリに紐づくアプリユーザを更新します。
 * @param appUser 更新対象のアプリユーザ・オブジェクト
 * @param successHandler 成功時実行ハンドラ
 * @param failureHandler 失敗時実行ハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)updateAppUser:(APISAppUser *)appUser success:(void (^)(APISResponseObject *response))successHandler failure:(void(^)(NSError *error))failureHandler;
/**
 * アプリユーザ削除API
 * @brief アプリに紐づくアプリユーザを削除します。
 * @param appUserId アプリユーザID
 * @since AppiariesSDK 1.2.0
 */
- (void)deleteAppUserWithId:(NSString *)appUserId;
/**
 * アプリユーザ削除API
 * @brief アプリに紐づくアプリユーザを削除します。
 * @param appUserId アプリユーザID
 * @param target    コールバック先オブジェクト
 * @param action    コールバックハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)deleteAppUserWithId:(NSString *)appUserId target:(id)target action:(SEL)action;
/**
 * アプリユーザ削除API
 * @brief アプリに紐づくアプリユーザを削除します。
 * @param appUserId アプリユーザID
 * @param successHandler 成功時実行ハンドラ
 * @param failureHandler 失敗時実行ハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)deleteAppUserWithId:(NSString *)appUserId success:(void (^)(APISResponseObject *response))successHandler failure:(void(^)(NSError *error))failureHandler;
/**
 * アプリユーザのメールアドレス削除API
 * @brief アプリに紐づくアプリユーザのメールアドレスを削除します。
 * @param appUserId アプリユーザID
 * @since AppiariesSDK 1.2.0
 */
- (void)deleteAppUserEmailWithId:(NSString *)appUserId;
/**
 * アプリユーザのメールアドレス削除API
 * @brief アプリに紐づくアプリユーザのメールアドレスを削除します。
 * @param appUserId アプリユーザID
 * @param target    コールバック先オブジェクト
 * @param action    コールバックハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)deleteAppUserEmailWithId:(NSString *)appUserId target:(id)target action:(SEL)action;
/**
 * アプリユーザのメールアドレス削除API
 * @brief アプリに紐づくアプリユーザのメールアドレスを削除します。
 * @param appUserId アプリユーザID
 * @param successHandler 成功時実行ハンドラ
 * @param failureHandler 失敗時実行ハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)deleteAppUserEmailWithId:(NSString *)appUserId success:(void (^)(APISResponseObject *response))successHandler failure:(void(^)(NSError *error))failureHandler;
/**
 * アプリユーザ・ログインAPI
 * @brief アプリにアプリユーザでログインします。
 * @param loginId アプリユーザのログインID
 * @param password アプリユーザのパスワード
 * @param autoLogin 自動ログインフラグ（YES=自動ログインする）
 * @since AppiariesSDK 1.2.0
 */
- (void)loginWithLoginId:(NSString *)loginId password:(NSString *)password autoLogin:(BOOL)autoLogin;
/**
 * アプリユーザ・ログインAPI
 * @brief アプリにアプリユーザでログインします。
 * @param loginId アプリユーザのログインID
 * @param password アプリユーザのパスワード
 * @param autoLogin 自動ログインフラグ（YES=自動ログインする）
 * @param target    コールバック先オブジェクト
 * @param action    コールバックハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)loginWithLoginId:(NSString *)loginId password:(NSString *)password autoLogin:(BOOL)autoLogin target:(id)target action:(SEL)action;
/**
 * アプリユーザ・ログインAPI
 * @brief アプリにアプリユーザでログインします。
 * @param loginId アプリユーザのログインID
 * @param password アプリユーザのパスワード
 * @param autoLogin 自動ログインフラグ（YES=自動ログインする）
 * @param successHandler 成功時実行ハンドラ
 * @param failureHandler 失敗時実行ハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)loginWithLoginId:(NSString *)loginId password:(NSString *)password autoLogin:(BOOL)autoLogin success:(void (^)(APISResponseObject *response))successHandler failure:(void(^)(NSError *error))failureHandler;
/**
 * 自動ログインAPI
 * @brief アプリにアプリユーザで自動ログインします。
 * @since AppiariesSDK 1.2.0
 */
- (void)autoLogin;
/**
 * 自動ログインAPI
 * @brief アプリにアプリユーザで自動ログインします。
 * @param target    コールバック先オブジェクト
 * @param action    コールバックハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)autoLoginWithTarget:(id)target action:(SEL)action;
/**
 * 自動ログインAPI
 * @brief アプリにアプリユーザで自動ログインします。
 * @param successHandler 成功時実行ハンドラ
 * @param failureHandler 失敗時実行ハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)autoLoginWithSuccess:(void (^)(APISResponseObject *response))successHandler failure:(void(^)(NSError *error))failureHandler;
/**
 * アプリユーザ・ログアウトAPI
 * @brief アプリからログアウトします。
 * @since AppiariesSDK 1.2.0
 */
- (void)logout;
/**
 * アプリユーザ・ログアウトAPI
 * @brief アプリからログアウトします。
 * @param target    コールバック先オブジェクト
 * @param action    コールバックハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)logoutWithTarget:(id)target action:(SEL)action;
/**
 * アプリユーザ・ログアウトAPI
 * @brief アプリからログアウトします。
 * @param successHandler 成功時実行ハンドラ
 * @param failureHandler 失敗時実行ハンドラ
 * @since AppiariesSDK 1.2.0
 */
- (void)logoutWithSuccess:(void (^)(APISResponseObject *response))successHandler failure:(void(^)(NSError *error))failureHandler;

@end
