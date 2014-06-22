//
//  ASMediaFocusViewController.h
//  ASMediaFocusManager
//
//  Created by Philippe Converset on 21/12/12.
//  Copyright (c) 2012 AutreSphere. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ASImageScrollView.h"

@interface ASMediaFocusController : UIViewController

@property (strong, nonatomic) ASImageScrollView *scrollView;
@property (strong, nonatomic) IBOutlet UIImageView *mainImageView;
@property (strong, nonatomic) IBOutlet UIView *contentView;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UIView *accessoryView;
@property (strong, nonatomic) UITapGestureRecognizer *doubleTapGesture;

// Returns whether the image will be rotated automatically with device rotation. Default YES.
@property (nonatomic) BOOL allowRotation;

- (void)updateOrientationAnimated:(BOOL)animated;
- (void)installZoomView;
- (void)uninstallZoomView;
- (void)pinAccessoryView;
- (void)showAccessoryView:(BOOL)visible;

@end
