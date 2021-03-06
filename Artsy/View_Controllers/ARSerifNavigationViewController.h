#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ARSerifNavigationViewController : UINavigationController

/// Calls initWithRootViewController:hideNavigationBar: with default value of NO.
- (instancetype)initWithRootViewController:(UIViewController *)rootViewController;

/// Initializes with a root view controller. hideNavigationBar can be used to hide the navigation bar and instead place
/// a close button floating over the content. This prevents the user from seeing a back button, so use carefully.
- (instancetype)initWithRootViewController:(UIViewController *)rootViewController hideNavigationBar:(BOOL)hideNavigationBar NS_DESIGNATED_INITIALIZER;

@property (nonatomic, assign) BOOL hideCloseButton;

@end


/// Creates a button for showing in the nav's top right
@interface ARSerifToolbarButtonItem : UIBarButtonItem

- (instancetype)initWithImage:(UIImage * _Nullable)image;
@property (nonatomic, strong, readonly) UIButton *button;

@end

NS_ASSUME_NONNULL_END
