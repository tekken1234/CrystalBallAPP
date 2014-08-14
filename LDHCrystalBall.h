//
//  LDHCrystalBall.h
//  CrystalBall1
//
//  Created by admin on 14/8/14.
//  Copyright (c) 2014年 YEHKUO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LDHCrystalBall : NSObject {
    NSArray * _prediction;
}


@property (strong, nonatomic,readonly) NSArray *prediction;
@property (strong, nonatomic) NSArray *quotes;
- (NSString *) randomPredictions;
@end
