/*
 Copyright 2009-2015 Urban Airship Inc. All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.

 2. Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE URBAN AIRSHIP INC ``AS IS'' AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 EVENT SHALL URBAN AIRSHIP INC OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <UIKit/UIKit.h>
#import "UAInboxMessage.h"

/**
 * The UITableViewCell subclass used by UAInboxMessageListController.
 */
@interface UAInboxMessageListCell : UITableViewCell

/**
 *Displays the message date.
 */
@property (nonatomic, weak) IBOutlet UILabel *dateView;

/**
 * Displays the message title.
 */
@property (nonatomic, weak) IBOutlet UILabel *title;

/**
 * Indicates whether a message has previously been read.
 */
@property (nonatomic, weak) IBOutlet UIView *unreadIndicator;

/**
 * The message icon.
 */
@property (nonatomic, weak) IBOutlet UIImageView *listIconView;

/**
 * Set the UAInboxMessage associated with this cell.
 * @param message The associated UAInboxMessage object.
 */
- (void)setData:(UAInboxMessage *)message;

@end
