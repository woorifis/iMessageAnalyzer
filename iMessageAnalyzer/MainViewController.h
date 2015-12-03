//
//  MainViewController.h
//  iMessageAnalyzer
//
//  Created by Ryan D'souza on 10/27/15.
//  Copyright © 2015 Ryan D'souza. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "MessageManager.h"

#import "ChatTableViewCell.h"
#import "TextTableCellView.h"

#import "MoreAnalysisWindowController.h"
#import "NSTextField+Messages.h"

#import "CalendarPopUpViewController.h"
#import "SimpleAnalyticsPopupViewController.h"

#import "ViewAttachmentsViewController.h"

#import "Contact.h"
#import "Message.h"
#import "Attachment.h"
#import "Person.h"

@interface MainViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSSearchFieldDelegate, CalendarPopUpViewControllerDelegate, NSPopoverDelegate, SimpleAnalyticsPopUpViewControllerDelegate, MoreAnalysisWindowControllerDelegate, NSTextField_MessagesDelegate>

@end
