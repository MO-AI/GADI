//
//  GADSender.h
//  GADIDemo
//
//  Created by HiromiMotodera on 2015/04/21.
//  Copyright (c) 2015年 HiromiMotodera. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GADSender : NSObject

- (instancetype)initWithTrackingID:(NSString *)trackingID;

- (void)sendScreenTrackingWithScreenName:(NSString *)screenName;

- (void)sendEventTrackingWithCategory:(NSString *)category action:(NSString *)action label:(NSString *)label;

@end
