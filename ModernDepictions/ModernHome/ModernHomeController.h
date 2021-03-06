#import <UIKit/UIKit.h>
#import <Headers/Headers.h>

@class Cydia;

@interface ModernHomeController : UITableViewController<UITableViewDelegate, UITableViewDataSource> {
	Cydia *_cydiaDelegate;
	Database *database;
	UIBarButtonItem *refreshButton;
	NSMutableDictionary *dummies;
	NSArray *cells; // Contains both actual cells and dictionaries
}
@property (nonatomic, assign, setter=setDelegate:, getter=delegate) Cydia *cydiaDelegate;
- (Cydia *)delegate;
- (void)setDelegate:(Cydia *)newDelegate;
- (instancetype)init;
@end

@interface ModernHomeController(Shared)
- (void)didSelectPackage:(NSString *)package;
@end