//
//  SlideToCancelAppDelegate.h
//  SlideToCancel
//

#import <UIKit/UIKit.h>
#import "TestIt.h"

@interface SlideToCancelAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	TestIt *testIt;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

