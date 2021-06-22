object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Povijest rada nad vozilima:'
  ClientHeight = 321
  ClientWidth = 365
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    365
    321)
  PixelsPerInch = 96
  TextHeight = 13
  object ListLog: TListBox
    Left = 8
    Top = 8
    Width = 349
    Height = 305
    Anchors = [akLeft, akTop, akRight, akBottom]
    ItemHeight = 13
    TabOrder = 0
  end
  object IdUDPServer1: TIdUDPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 15555
      end>
    DefaultPort = 15555
    OnUDPRead = IdUDPServer1UDPRead
    Left = 160
    Top = 152
  end
end
