//
//  OpsViewController.h
//  Ingress
//
//  Created by Alex Studnička on 16.06.13.
//  Copyright (c) 2013 A&A Code. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TTSlidingPagesDataSource.h"
#import "GlowingLabel.h"

#import "ScoreViewController.h"

@protocol OpsViewControllerDelegate;

@interface OpsViewController : UIViewController <TTSlidingPagesDataSource, UIScrollViewDelegate> {
	
	__weak IBOutlet UIButton *opsCloseButton;
	__weak IBOutlet GlowingLabel *opsLabel;
}

@property (nonatomic, weak) id <OpsViewControllerDelegate> delegate;

@property (nonatomic, strong) ScoreViewController *scoreViewController;

- (IBAction)back;

@end

@protocol OpsViewControllerDelegate <NSObject>

@optional
- (void)willDismissOpsViewController:(OpsViewController *)opsViewController;
- (void)didDismissOpsViewController:(OpsViewController *)opsViewController;

@end