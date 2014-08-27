//
//  GymBudEventsCell.h
//  GymBud
//
//  Created by Benjamin Hendricks on 8/26/14.
//  Copyright (c) 2014 GymBud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GymBudEventsCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *capacityTextLabel;
@property (weak, nonatomic) IBOutlet UILabel *startTimeTextLabel;
@property (weak, nonatomic) IBOutlet UILabel *nameTextLabel;
@property (weak, nonatomic) IBOutlet UIImageView *logoImageView;
@end
