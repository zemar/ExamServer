//
//  AppDelegate.m
//  ExamServer
//


#import "AppDelegate.h"
#import "Communicator.h"

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
	Communicator *communicator = [[Communicator alloc] init];
	
	communicator->host = @"http://127.0.0.1";
	communicator->port = 6789;
	
	[communicator setup];
	[communicator open];

}

@end
