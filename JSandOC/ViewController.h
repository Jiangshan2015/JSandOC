//
//  ViewController.h
//  JSandOC
//
//  Created by songge on 2017/3/20.
//  Copyright © 2017年 songge. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JavaScriptCore/JavaScriptCore.h>

@protocol JSObjcDelegate <JSExport>
//调用的JavaScript方法，必须声明！！！
- (void)method;//不需传参
- (void)postMethod:(NSString *)string;//需要传参
@end

@interface ViewController : UIViewController<UIWebViewDelegate,JSObjcDelegate>
@property (strong, nonatomic)  UIWebView *webView;
@property (nonatomic, strong) JSContext *jsContext;

@end

