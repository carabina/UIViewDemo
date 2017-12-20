//
//  LSBannerEntity.h
//  LSMessages
//
//  Created by lisa on 2017/12/18.
//  Copyright © 2017年 lisa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LSBannerEntity : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)dic;
@property (nonatomic,copy,readonly) NSString * title;
@property (nonatomic,copy,readonly) NSString * imageName;

@end
