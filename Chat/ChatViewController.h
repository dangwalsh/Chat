//
//  ChatViewController.h
//  Chat
//
//  Created by Daniel Walsh on 12/5/13.
//  Copyright (c) 2013 Daniel Walsh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChatViewController : UIViewController <NSStreamDelegate, UITableViewDelegate, UITableViewDataSource> {
    NSInputStream *inputStream;
    NSOutputStream *outputStream;
    NSMutableArray * messages;
}

@property (weak, nonatomic) IBOutlet UIView *chatView;
@property (weak, nonatomic) IBOutlet UITextField *inputMessageField;
@property (weak, nonatomic) IBOutlet UITableView *tView;
@property (weak, nonatomic) IBOutlet UIView *joinView;
@property (weak, nonatomic) IBOutlet UITextField *inputNameField;

- (IBAction)joinChat:(id)sender;
- (IBAction)sendMessage:(id)sender;

@end
