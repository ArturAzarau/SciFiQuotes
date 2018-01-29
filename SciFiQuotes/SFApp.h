//
//  SFApp.h
//  SciFiQuotes
//
//  Created by Артур Азаров on 29.01.2018.
//  Copyright © 2018 Артур Азаров. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFQuote.h"

NS_ASSUME_NONNULL_BEGIN
@interface SFApp : NSObject
@property NSMutableArray<SFQuote*> *quotes;
- (instancetype)initWithFile:(NSString*)filename;
- (void)printQuote;
@end
NS_ASSUME_NONNULL_END
