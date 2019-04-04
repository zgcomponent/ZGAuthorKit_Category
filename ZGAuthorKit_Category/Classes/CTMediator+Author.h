//
//  CTMediator+Author.h
//  Pods-ZGAuthorKit_Category_Example
//
//  Created by 王史超 on 2019/4/4.
//

#import <CTMediator/CTMediator.h>
#import <ZGAPIsKit/APIRequest.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Author)

- (UIViewController *)authorDetailViewController;
- (NSDictionary *)authorReformerWithOriginData:(NSDictionary *)data;
- (NSDictionary *)authorReformer;
- (APIRequest *)authorAPIRequest;


@end

NS_ASSUME_NONNULL_END
