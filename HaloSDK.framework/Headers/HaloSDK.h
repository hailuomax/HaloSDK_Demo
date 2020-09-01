//
//  HaloSDK.h
//  HaloSDK
//
//  Created by 黄国坚 on 2020/8/28.
//  Copyright © 2020 黄国坚. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HaloSDK : NSObject

///授权
/// @param appId 应用id
+(void)authorizationWithAppId: (NSString *)appId;

///支付
/// @param orderId  订单号
+(void)payWithOrderId:(NSString *)orderId;

///充值
+(void)rechargeWithAppId: (NSString *)appId
                  OpenId: (NSString *)openId
              accessToken:(NSString *)accessToken
                 merchant:(NSString *)merchant
               merchantId:(NSString *)merchantId
                notifyUrl:(NSString *)notifyUrl
               outTradeNo:(NSString *)outTradeNo
                   amount:(NSString *)amount
                 coinName:(NSString *)coinName
                  remark:(NSString *)remark;


@end

NS_ASSUME_NONNULL_END
