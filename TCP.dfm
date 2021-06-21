object TCPWindow: TTCPWindow
  Left = 0
  Top = 0
  Caption = 'TCP Login tracker'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object logEdit: TEdit
    Left = 24
    Top = 24
    Width = 361
    Height = 241
    TabOrder = 0
    Text = 'logEdit'
  end
  object IdTCPServer1: TIdTCPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 12345
      end>
    DefaultPort = 12345
    OnExecute = IdTCPServer1Execute
    Left = 424
    Top = 176
  end
end
