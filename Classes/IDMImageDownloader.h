//
//  IDMImageDownloader.h
//  PhotoBrowserDemo
//
//  Created by jayy on 29/07/2016.
//
//

#import <Foundation/Foundation.h>

@protocol IDMImageDownloader
-(void) downloadImageForURL:(NSURL *)url withProgress:(void (^) (CGFloat progress)) progressCallback andWithSuccessCallback:(void (^) (UIImage *image)) successCallback;

@end