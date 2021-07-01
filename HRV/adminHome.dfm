object adminHomeWindow: TadminHomeWindow
  Left = 0
  Top = 0
  Caption = 'adminHomeWindow'
  ClientHeight = 518
  ClientWidth = 778
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox2: TGroupBox
    Left = 8
    Top = 360
    Width = 762
    Height = 145
    Caption = 'Administracija:'
    TabOrder = 0
    object showDatabase: TButton
      Left = 16
      Top = 32
      Width = 105
      Height = 33
      Caption = 'Baze podataka'
      TabOrder = 0
      OnClick = showDatabaseClick
    end
    object Button1: TButton
      Left = 188
      Top = 32
      Width = 105
      Height = 33
      Caption = 'HTTP Klijent'
      TabOrder = 1
      OnClick = Button1Click
    end
    object getIP: TButton
      Left = 188
      Top = 91
      Width = 105
      Height = 33
      Caption = 'Dohvati IP'
      TabOrder = 2
      OnClick = getIPClick
    end
    object showIP: TMemo
      Left = 299
      Top = 100
      Width = 162
      Height = 17
      ReadOnly = True
      TabOrder = 3
    end
    object editPermissions: TButton
      Left = 360
      Top = 32
      Width = 162
      Height = 33
      Caption = 'Upravljanje administatorima'
      TabOrder = 4
      OnClick = editPermissionsClick
    end
    object getUsers: TButton
      Left = 571
      Top = 32
      Width = 162
      Height = 33
      Caption = 'Broj administratora i korisnika'
      TabOrder = 5
      OnClick = getUsersClick
    end
    object Button2: TButton
      Left = 16
      Top = 88
      Width = 105
      Height = 33
      Caption = 'Godi'#353'nji odmori'
      TabOrder = 6
      OnClick = Button2Click
    end
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 761
    Height = 338
    Caption = 'Vozila:'
    TabOrder = 1
    DesignSize = (
      761
      338)
    object listCars: TListView
      Left = 16
      Top = 26
      Width = 729
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
      TabOrder = 0
      ViewStyle = vsReport
    end
    object loadVehiclesButton: TButton
      Left = 16
      Top = 289
      Width = 105
      Height = 33
      Caption = 'U'#269'itaj vozila'
      TabOrder = 1
      OnClick = loadVehiclesButtonClick
    end
    object newVehicleButton: TButton
      Left = 188
      Top = 289
      Width = 105
      Height = 33
      Caption = 'Dodaj novo vozilo'
      TabOrder = 2
      OnClick = newVehicleButtonClick
    end
    object deleteVehicleButton: TButton
      Left = 360
      Top = 289
      Width = 129
      Height = 33
      Caption = 'Obri'#353'i odabrano vozilo'
      TabOrder = 3
      OnClick = deleteVehicleButtonClick
    end
  end
  object XMLDocument2: TXMLDocument
    FileName = 'D:\GitHub\vLonac-NTP---Projekt\vehicles.xml'
    Left = 696
    Top = 235
  end
  object UDPClient: TIdUDPClient
    BroadcastEnabled = True
    Port = 15555
    Left = 696
    Top = 176
  end
  object RESTClient1: TRESTClient
    BaseURL = 'https://api.ipify.org/?format=xml'
    Params = <>
    Left = 696
    Top = 96
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
    Left = 584
    Top = 96
  end
  object RESTResponse1: TRESTResponse
    Left = 640
    Top = 96
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
      Control = showIP
      Track = False
    end
  end
end
