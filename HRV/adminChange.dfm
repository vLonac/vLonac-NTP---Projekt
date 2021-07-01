object changeAdmin: TchangeAdmin
  Left = 0
  Top = 0
  Caption = 'Upravljanje administatorima:'
  ClientHeight = 248
  ClientWidth = 758
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object buttonMakeAdmin: TButton
    Left = 608
    Top = 62
    Width = 132
    Height = 25
    Caption = 'Make Administrator'
    TabOrder = 0
    OnClick = buttonMakeAdminClick
  end
  object buttonRemoveAdmin: TButton
    Left = 608
    Top = 134
    Width = 132
    Height = 25
    Caption = 'Remove Administrator'
    TabOrder = 1
    OnClick = buttonRemoveAdminClick
  end
  object userList: TListView
    Left = 8
    Top = 8
    Width = 581
    Height = 225
    Columns = <
      item
        Caption = 'Username'
        Width = 70
      end
      item
        Caption = 'Password'
        Width = 70
      end
      item
        Caption = 'Name'
      end
      item
        Caption = 'Surname'
        Width = 70
      end
      item
        Caption = 'E-Mail'
        Width = 110
      end
      item
        Caption = 'Date of birth'
        Width = 80
      end
      item
        Caption = 'User privileges'
        Width = 120
      end>
    TabOrder = 2
    ViewStyle = vsReport
  end
  object XMLDocument1: TXMLDocument
    FileName = 'D:\GitHub\vLonac-NTP---Projekt\data.xml'
    Left = 40
    Top = 52
  end
end
