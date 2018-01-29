//
//  SFQuote.m
//  SciFiQuotes
//
//  Created by Артур Азаров on 29.01.2018.
//  Copyright © 2018 Артур Азаров. All rights reserved.
//

#import "SFQuote.h"

@implementation SFQuote
-(instancetype)initWithLine:(NSString *)line {
    if (self = [super init]) {
        NSArray *split = [line componentsSeparatedByString:@"/"];
        if ([split count] != 2) {
            return nil;
        }
        
        self.text = split[0];
        self.person = split[1];
    }
    return self;
}
@end
