//
//  MainViewController.h
//  ExamServer
//
//  Created by Camel and Panda on 5/25/14.
//  Copyright (c) 2014 mike. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class GCDAsyncSocket;


@interface MainViewController : NSViewController
{
	dispatch_queue_t socketQueue;
	
	GCDAsyncSocket *listenSocket;
	NSMutableArray *connectedSockets;
	
	BOOL isRunning;
	
	IBOutlet id logView;
	IBOutlet id portField;
	IBOutlet id startStopButton;
    NSWindow *__unsafe_unretained window;

}

@property (unsafe_unretained) IBOutlet NSWindow *window;

- (IBAction)startStop:(id)sender;

@end
