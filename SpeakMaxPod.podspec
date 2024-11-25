#
# Be sure to run `pod lib lint SpeakMaxPod.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.static_framework = true
  s.name             = 'SpeakMaxPod'
  s.version          = '0.1.0'
  s.summary          = 'A short description of SpeakMaxPod.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/gunner08/SpeakMaxPod'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'gunner08' => 'gunner0418@gmail.com' }
  s.source           = { :git => 'https://github.com/gunner08/SpeakMaxPod.git', :tag => s.version.to_s }
  s.platform         = :ios, '12.0'
  s.ios.deployment_target = '12.0'
  s.cocoapods_version = '>= 1.12.0'
  s.swift_version     = '5.9'
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.source_files = 'SpeakMaxPod/Classes/**/*'
  
  s.vendored_frameworks = 'SpeakMaxPod/Frameworks/UnityPod.framework'
  
  #Google
  s.dependency  'FirebaseAnalytics', '~> 11.5.0'
  #Google代码追踪
  #s.dependency  'GoogleTagManager', '~> 8.0.0'
  #adjust
  s.dependency 'Adjust', '~> 5.0.1'
  
  #友盟
  s.dependency 'UMCommon'
  s.dependency 'UMDevice'
  #调试集成 发布注释掉log模块
#  s.dependency 'UMCCommonLog'

  #mob share
  s.dependency 'mob_sharesdk'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/QQ_Lite'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/Facebook_Lite'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/Apple'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/GooglePlus'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/Line'
  #kakao wechat 不能放里面 直接在项目导入
  #  s.dependency 'mob_sharesdk/ShareSDKPlatforms/Kakao'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/WeChat_Lite'
  
  #mob sms
  s.dependency 'mob_smssdk'
end
