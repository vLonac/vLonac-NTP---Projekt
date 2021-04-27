object loginWindow: TloginWindow
  Left = 49
  Top = 0
  Caption = 'PLACEHOLDER[Rent-a-car helper]'
  ClientHeight = 407
  ClientWidth = 376
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object credits: TLabel
    Left = 0
    Top = 394
    Width = 376
    Height = 13
    Align = alBottom
    Alignment = taCenter
    Caption = 
      'Izradili: Vanja Lon'#269'ari'#263' i Renato Mace'#353'an @ Tehni'#269'ko Veleu'#269'ili'#353't' +
      'e u Zagrebu '
    ExplicitLeft = 8
    ExplicitTop = 386
    ExplicitWidth = 363
  end
  object loginGroup: TGroupBox
    Left = 0
    Top = 0
    Width = 376
    Height = 394
    Align = alClient
    Caption = '-'
    TabOrder = 0
    ExplicitTop = -6
    object loginUsernameLabel: TLabel
      Left = 128
      Top = 64
      Width = 121
      Height = 13
      Alignment = taCenter
      Caption = 'Korisni'#269'ko ime:'
    end
    object loginPasswordLabel: TLabel
      Left = 128
      Top = 144
      Width = 121
      Height = 25
      Alignment = taCenter
      Caption = 'Lozinka:'
    end
    object newUserLabel: TLabel
      Left = 155
      Top = 292
      Width = 67
      Height = 13
      AutoSize = False
      Caption = 'Nema'#353' ra'#269'un?'
    end
    object username: TEdit
      Left = 128
      Top = 101
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object loginButton: TButton
      Left = 155
      Top = 232
      Width = 75
      Height = 25
      Caption = 'Prijava'
      TabOrder = 1
      OnClick = loginButtonClick
    end
    object password: TEdit
      Left = 128
      Top = 184
      Width = 121
      Height = 21
      TabOrder = 2
    end
    object newUserButton: TButton
      Left = 128
      Top = 311
      Width = 121
      Height = 25
      Caption = 'Novi korisnik'
      TabOrder = 3
      OnClick = newUserButtonClick
    end
  end
end
