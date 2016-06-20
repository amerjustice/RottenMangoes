//
//  MovieCell.h
//  RottenMangoes
//
//  Created by Susan Justice on 2016-05-24.
//  Copyright © 2016 Amer Justice. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *boxImage;
@property (weak, nonatomic) IBOutlet UILabel *movieTitle;
@property (weak, nonatomic) IBOutlet UILabel *movieSynopsis;

@end
