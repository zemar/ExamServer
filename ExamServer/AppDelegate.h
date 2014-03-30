#import <Cocoa/Cocoa.h>



@interface AppDelegate : NSObject <NSApplicationDelegate>
{
	dispatch_queue_t socketQueue;
	
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
