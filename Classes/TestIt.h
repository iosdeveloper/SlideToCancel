//
//  TestIt.h
//  SlideToCancel
//

#import <UIKit/UIKit.h>
#import "SlideToCancelViewController.h"

@interface TestIt : UIViewController <SlideToCancelDelegate> {
	UIButton *testItButton;
	SlideToCancelViewController *slideToCancel;
}

@property (nonatomic, retain) IBOutlet UIButton *testItButton;

- (IBAction) testIt;

@end
