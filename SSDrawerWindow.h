//
//  SSDrawerWindow.h
//
//  Copyright (c) 2014 Symbiotic Software. All rights reserved.
//

#import <UIKit/UIKit.h>

#define DEFAULT_DRAWER_OPTIONS_PORTRAIT (SSDrawerWindowOptions){.depth=220.0f, .animationDuration=0.25, .animationOptions=UIViewAnimationOptionCurveEaseOut}
#define DEFAULT_DRAWER_OPTIONS_LANDSCAPE (SSDrawerWindowOptions){.depth=380.0f, .animationDuration=0.45, .animationOptions=UIViewAnimationOptionCurveEaseOut}

struct SSDrawerWindowOptions
{
	CGFloat depth;
	NSTimeInterval animationDuration;
	UIViewAnimationOptions animationOptions;
};
typedef struct SSDrawerWindowOptions SSDrawerWindowOptions;

@interface SSDrawerWindow : UIWindow

@property (nonatomic, retain) UIViewController *drawerViewController;
@property (nonatomic, assign) SSDrawerWindowOptions portraitDrawerOptions;
@property (nonatomic, assign) SSDrawerWindowOptions landscapeDrawerOptions;

- (BOOL)isOpen;
- (void)openDrawer:(BOOL)animated;
- (void)closeDrawer:(BOOL)animated;

@end

// Customizeable Knob button that will start opening the drawer if dragged or open it if clicked.
@interface SSDrawerKnob : UIButton
+ (instancetype)drawerKnob;
@end
