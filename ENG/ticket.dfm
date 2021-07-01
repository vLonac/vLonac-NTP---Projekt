object ticketWindow: TticketWindow
  Left = 0
  Top = 0
  Caption = 'Report an issue:'
  ClientHeight = 332
  ClientWidth = 263
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 19
    Width = 22
    Height = 13
    Caption = 'Name:'
  end
  object Label2: TLabel
    Left = 16
    Top = 62
    Width = 37
    Height = 13
    Caption = 'Issue:'
  end
  object editName: TEdit
    Left = 72
    Top = 16
    Width = 169
    Height = 21
    TabOrder = 0
  end
  object editMessage: TEdit
    Left = 72
    Top = 59
    Width = 169
    Height = 198
    AutoSize = False
    TabOrder = 1
  end
  object buttonSend: TButton
    Left = 16
    Top = 288
    Width = 75
    Height = 25
    Caption = 'Send'
    TabOrder = 2
    OnClick = buttonSendClick
  end
  object buttonSendInc: TButton
    Left = 136
    Top = 288
    Width = 105
    Height = 25
    Caption = 'Send anonymously'
    TabOrder = 3
    OnClick = buttonSendIncClick
  end
end
