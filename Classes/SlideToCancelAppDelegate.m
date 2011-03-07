//
//  SlideToCancelAppDelegate.m
//  SlideToCancel
//

#import "SlideToCancelAppDelegate.h"

@implementation SlideToCancelAppDelegate

@synthesize window;

- (void)applicationDidFinishLaunching:(UIApplication *)application {    

    // Override point for customization after application launch
	testIt = [[TestIt alloc] initWithNibName:@"TestIt" bundle:nil];
	
	[window addSubview:testIt.view];	

    [window makeKeyAndVisible];
}

- (void)dealloc {
	[testIt release];
    [window release];
    [super dealloc];
}

@end
