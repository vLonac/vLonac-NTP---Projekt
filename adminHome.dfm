object adminHomeWindow: TadminHomeWindow
  Left = 0
  Top = 0
  Caption = 'adminHomeWindow'
  ClientHeight = 327
  ClientWidth = 505
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    505
    327)
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 489
    Height = 311
    Anchors = [akLeft, akTop, akRight, akBottom]
    TabOrder = 0
    object newVehicleButton: TButton
      Left = 16
      Top = 264
      Width = 105
      Height = 33
      Caption = 'Dodaj novo vozilo'
      TabOrder = 0
      OnClick = newVehicleButtonClick
    end
  end
end
