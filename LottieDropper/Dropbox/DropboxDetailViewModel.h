//
//  DropboxDetailViewModel.h
//  LottieDropper
//
//  Created by Stijn Willems on 27/03/2017.
//  Copyright © 2017 icapps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Connectivity.h"

NS_ASSUME_NONNULL_BEGIN

@class DBFILESMetadata;
@class DBUserClient;

@interface DropboxDetailViewModel : NSObject

-(instancetype)initWithLocalFile: (NSString *) localFile client: (DBUserClient *)client;

#pragma mark: - Dropbox file info

@property (nonatomic, strong, nullable) NSDictionary * json;

- (void) downloadFile:(void (^) (void)) done;

#pragma mark: - Display info

-(NSString *)fileName;

@end

NS_ASSUME_NONNULL_END
