//
//  LDHViewController.h
//  CrystalBall1
//
//  Created by admin on 14/8/14.
//  Copyright (c) 2014年 YEHKUO. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LDHCrystalBall;

@interface LDHViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) LDHCrystalBall *crystalBall;
@property (strong, nonatomic) NSArray *quotes;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void)makePrediction;
@end