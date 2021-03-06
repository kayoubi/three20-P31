//
// Copyright 2009-2010 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// UI
#import "Three20/TTTableTextItem.h"

@class TTStyle;

@interface TTTableImageItem : TTTableTextItem {
  NSString* _imageURL;
  UIImage*  _defaultImage;
  TTStyle*  _imageStyle;
}

@property (nonatomic, copy)   NSString* imageURL;
@property (nonatomic, retain) UIImage*  defaultImage;
@property (nonatomic, retain) TTStyle*  imageStyle;

+ (id)itemWithText:(NSString*)text imageURL:(NSString*)imageURL;
+ (id)itemWithText:(NSString*)text imageURL:(NSString*)imageURL URL:(NSString*)URL;
+ (id)itemWithText:(NSString*)text imageURL:(NSString*)imageURL
      defaultImage:(UIImage*)defaultImage URL:(NSString*)URL;
+ (id)itemWithText:(NSString*)text imageURL:(NSString*)imageURL
      defaultImage:(UIImage*)defaultImage imageStyle:(TTStyle*)imageStyle URL:(NSString*)URL;

@end
