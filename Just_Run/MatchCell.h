//
//  MatchCell.h
//  Just_Run
//
//  Created by aoyolo on 15/8/30.
//  Copyright (c) 2015年 aoyolo. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MatchModel;
@interface MatchCell : UITableViewCell
+ (UINib *)nib;
- (void)configureCellWithDictionary:(MatchModel *)model;
@end
