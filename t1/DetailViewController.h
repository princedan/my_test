//
//  DetailViewController.h
//  t1
//
//  Created by huadoo on 14-4-15.
//  Copyright (c) 2014年 com.huadoo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
