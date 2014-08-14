//
//  LDHCrystalBall.m
//  CrystalBall1
//
//  Created by admin on 14/8/14.
//  Copyright (c) 2014年 YEHKUO. All rights reserved.
//

#import "LDHCrystalBall.h"

@implementation LDHCrystalBall

- (NSArray *)prediction {
    if (_prediction == nil)
        _prediction = [[NSArray alloc]initWithObjects:@"Today isnt your day",@"Just go for it!", @"Suck it", @"Not able to answer you now", @"Ask again!", @"I dont know what you talking about?", @"Toss your phone on the ground", @"I am with you, keep telling", @"That was fun?", @"Game Over!", @"Good-luck with your additude!", @"Filp a coin to decide instead asking me", nil];
    
    return _prediction;
}

- (NSString *) randomPredictions {
    
    int random = arc4random_uniform(self.prediction.count);
    
    return [self.prediction objectAtIndex:random];
}

@end