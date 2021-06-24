object homeWindow: ThomeWindow
  Left = 0
  Top = 0
  Caption = 'caption'
  ClientHeight = 407
  ClientWidth = 765
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  DesignSize = (
    765
    407)
  PixelsPerInch = 96
  TextHeight = 13
  object rentalGroup: TGroupBox
    Left = 0
    Top = 0
    Width = 765
    Height = 407
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 746
    ExplicitHeight = 339
    object Label1: TLabel
      Left = 8
      Top = 275
      Width = 98
      Height = 13
      Caption = 'Po'#269'etak rezervacije:'
    end
    object Label2: TLabel
      Left = 143
      Top = 275
      Width = 108
      Height = 13
      Caption = 'Zavr'#353'etak rezervacije:'
    end
    object newReservationButton: TButton
      Left = 304
      Top = 272
      Width = 113
      Height = 49
      Caption = 'Izradi rezervaciju'
      TabOrder = 0
      OnClick = newReservationButtonClick
    end
    object newReservationStart: TDatePicker
      Left = 8
      Top = 294
      Width = 129
      Height = 25
      Date = 44348.000000000000000000
      DateFormat = 'dd/MM/yyyy'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Segoe UI'
      Font.Style = []
      TabOrder = 1
    end
    object newReservationEnd: TDatePicker
      Left = 143
      Top = 294
      Width = 129
      Height = 25
      Date = 44378.000000000000000000
      DateFormat = 'dd/MM/yyyy'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Segoe UI'
      Font.Style = []
      TabOrder = 2
    end
    object showReservations: TButton
      Left = 423
      Top = 272
      Width = 125
      Height = 49
      Caption = 'Pregledaj rezervacije'
      TabOrder = 3
      OnClick = showReservationsClick
    end
    object Memo1: TMemo
      Left = 8
      Top = 344
      Width = 129
      Height = 23
      Lines.Strings = (
        '185.65.134.173')
      TabOrder = 4
    end
    object getIP: TButton
      Left = 152
      Top = 342
      Width = 113
      Height = 25
      Caption = 'Dohvati IP adresu'
      TabOrder = 5
      OnClick = getIPClick
    end
  end
  object listCars: TListView
    Left = 8
    Top = 8
    Width = 749
    Height = 249
    Anchors = [akLeft, akTop, akRight]
    Columns = <
      item
        Caption = 'Manufacturer'
        Width = 100
      end
      item
        Caption = 'Model'
        Width = 90
      end
      item
        Caption = 'Fuel'
        Width = 115
      end
      item
        Caption = 'Doors'
        Width = 40
      end
      item
        Caption = 'Shift'
        Width = 70
      end
      item
        Caption = 'Drive'
      end
      item
        Caption = 'AC'
      end
      item
        Caption = 'Bluetooth'
        Width = 70
      end
      item
        Caption = 'ENC'
      end
      item
        Caption = 'Cruise Control'
        Width = 80
      end>
    TabOrder = 1
    ViewStyle = vsReport
    ExplicitWidth = 730
  end
  object XMLDocument2: TXMLDocument
    FileName = 'D:\GitHub\vLonac-NTP---Projekt\vehicles.xml'
    Left = 672
    Top = 275
  end
  object XMLDocument1: TXMLDocument
    FileName = 'D:\GitHub\vLonac-NTP---Projekt\data.xml'
    Left = 584
    Top = 279
  end
  object RESTClient1: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 'https://api.ipify.org/?format=xml'
    Params = <>
    Left = 384
    Top = 352
  end
  object RESTRequest1: TRESTRequest
    Client = RESTClient1
    Params = <
      item
        Name = 'format'
        Value = 'xml'
      end>
    Response = RESTResponse1
    SynchronizedEvents = False
    Left = 328
    Top = 336
  end
  object RESTResponse1: TRESTResponse
    ContentType = 'text/plain'
    Left = 272
    Top = 352
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 20
    Top = 5
    object LinkControlToField1: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = RESTResponse1
      FieldName = 'Content'
      Control = Memo1
      Track = False
    end
  end
end
