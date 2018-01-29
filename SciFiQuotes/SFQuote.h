//
//  SFQuote.h
//  SciFiQuotes
//
//  Created by Артур Азаров on 29.01.2018.
//  Copyright © 2018 Артур Азаров. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface SFQuote : NSObject
@property NSString * text;
@property NSString * person;

- (nullable instancetype)initWithLine:(NSString*)line;
@end
NS_ASSUME_NONNULL_END
