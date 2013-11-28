//
//  TBMessage.h
//  Cryptocat
//
//  Created by Thomas Balthazar on 12/11/13.
//  Copyright (c) 2013 Thomas Balthazar. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TBBuddy;

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
@interface TBMessage : NSObject

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *warningText;
@property (nonatomic, strong) TBBuddy *sender;
@property (nonatomic, readonly) BOOL isWarningMessage;
@property (nonatomic, assign) BOOL isErrorMessage;

@end
