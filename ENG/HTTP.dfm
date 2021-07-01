object HTTPWindow: THTTPWindow
  Left = 0
  Top = 0
  Caption = 'HTTP Client'
  ClientHeight = 553
  ClientWidth = 410
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    410
    553)
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 394
    Height = 537
    Anchors = [akLeft, akTop, akRight, akBottom]
    Caption = 'Download promo picture:'
    TabOrder = 0
    object statusLabel: TLabel
      Left = 342
      Top = 56
      Width = 19
      Height = 16
      Caption = '0%'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Image1: TImage
      Left = 24
      Top = 320
      Width = 337
      Height = 193
      Stretch = True
    end
    object progressBar: TProgressBar
      Left = 24
      Top = 48
      Width = 297
      Height = 33
      TabOrder = 0
    end
    object buttonCancel: TButton
      Left = 297
      Top = 104
      Width = 64
      Height = 25
      Caption = 'Cancel'
      TabOrder = 1
      OnClick = buttonCancelClick
    end
    object buttonDownload: TButton
      Left = 233
      Top = 104
      Width = 58
      Height = 25
      Caption = 'Download'
      TabOrder = 2
      OnClick = buttonDownloadClick
    end
    object linkEdit: TEdit
      Left = 24
      Top = 106
      Width = 193
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      Text = 'http://vanja-loncaric.from.hr/car.jpg'
    end
    object GroupBox2: TGroupBox
      Left = 108
      Top = 160
      Width = 183
      Height = 97
      Caption = 'Download speed:'
      TabOrder = 4
      object buttonSpeed1: TButton
        Left = 13
        Top = 23
        Width = 75
        Height = 25
        Caption = '0,5 MB/s'
        TabOrder = 0
        OnClick = buttonSpeed1Click
      end
      object buttonSpeed2: TButton
        Left = 94
        Top = 23
        Width = 75
        Height = 25
        Caption = '1 MB/s'
        TabOrder = 1
        OnClick = buttonSpeed2Click
      end
      object buttonSpeed3: TButton
        Left = 14
        Top = 61
        Width = 75
        Height = 25
        Caption = '2 MB/s'
        TabOrder = 2
        OnClick = buttonSpeed3Click
      end
      object buttonSpeed4: TButton
        Left = 94
        Top = 61
        Width = 75
        Height = 25
        Caption = 'Unlimited'
        TabOrder = 3
      end
    end
    object buttonImage: TButton
      Left = 152
      Top = 280
      Width = 75
      Height = 25
      Caption = 'Show picture'
      TabOrder = 5
      OnClick = buttonImageClick
    end
  end
  object komponentaHTTP: TIdHTTP
    Intercept = downloadSpeedLimiter
    OnWork = komponentaHTTPWork
    OnWorkBegin = komponentaHTTPWorkBegin
    OnWorkEnd = komponentaHTTPWorkEnd
    AllowCookies = True
    ProxyParams.BasicAuthentication = False
    ProxyParams.ProxyPort = 0
    Request.ContentLength = -1
    Request.ContentRangeEnd = -1
    Request.ContentRangeStart = -1
    Request.ContentRangeInstanceLength = -1
    Request.Accept = 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8'
    Request.BasicAuthentication = False
    Request.UserAgent = 'Mozilla/3.0 (compatible; Indy Library)'
    Request.Ranges.Units = 'bytes'
    Request.Ranges = <>
    HTTPOptions = [hoForceEncodeParams]
    Left = 48
    Top = 192
  end
  object downloadSpeedLimiter: TIdInterceptThrottler
    BitsPerSec = 0
    RecvBitsPerSec = 0
    SendBitsPerSec = 0
    Left = 344
    Top = 192
  end
end
