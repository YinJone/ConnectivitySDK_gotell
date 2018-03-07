Pod::Spec.new do |s|

  s.name         = "GConnectivitySDK"
  s.version = "1.0.2"
  s.summary      = "This is the Fon Connectivity SDK for iOS devices."
  s.homepage     = "https://github.com/YinJone/WPASDK_gotell"
  s.license      = "MIT"
  s.author       = { "Jone.yin" => "yin_jone@163.com" }
  s.ios.deployment_target = '9.0'
  s.vendored_framework = 'ConnectivitySDK.framework'
  s.frameworks = "Foundation"
  s.requires_arc = true
  s.source = { git: 'https://github.com/YinJone/ConnectivitySDK_gotell.git', :tag => s.version}
  s.dependency 'GWisprSDK', '1.0.2'

  s.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
end