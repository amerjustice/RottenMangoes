//
//  MovieDetailsViewController.h
//  RottenMangoes
//
//  Created by Susan Justice on 2016-05-24.
//  Copyright © 2016 Amer Justice. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieDetailsViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *posterImage;
@property (weak, nonatomic) IBOutlet UILabel *movieDetailsTitle;
@property (weak, nonatomic) IBOutlet UILabel *movieDetailsSynopsis;
@property (weak, nonatomic) IBOutlet UILabel *movieDetailsCast;
@property (weak, nonatomic) IBOutlet UILabel *movieDetailsRatings;

@end
