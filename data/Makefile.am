# Makefile for installing and uninstalling all BeebEm data files

SHELL=@SHELL@

pkgdata_DATA = config/econet.cfg config/phroms.cfg config/roms.cfg config/roms_torch.cfg \
		config/roms_bbc.cfg \
		\
		media/discs/econet_level_1_utils.ssd media/discs/econet_level_2_utils.ssd \
		media/discs/games.ssd media/discs/master_welcome.adl media/discs/test.ssd \
		media/discs/welcome.ssd media/discs/bbcmaster512-disc1-dosplusboot.adl \
		media/discs/cpm_utilities_disc.dsd \
		\
		media/scsi/sasi0.dat \
		media/scsi/scsi0.dat media/scsi/scsi0.dsc \
		media/scsi/scsi1.dat media/scsi/scsi1.dsc \
		media/scsi/scsi2.dat media/scsi/scsi2.dsc \
		media/scsi/scsi3.dat media/scsi/scsi3.dsc \
		\
		media/tapes/test.uef \
		\
		phroms/phroma phroms/phromsus.txt phroms/phromus \
		\
		resources/icon.bmp resources/relayoff.snd resources/relayon.snd \
		resources/teletext.fnt resources/font10x16.bmp resources/font5x8.bmp \
		\
		roms/bbc/adfs-1.30.rom roms/bbc/basic2.rom roms/bbc/dnfs.rom \
		roms/bbc/mcp120.cbl roms/bbc/os12.rom roms/bbc/wdfs.rom \
		roms/bbc/ats-3.0-1.rom \
		\
		roms/bbcint/basic2.rom roms/bbcint/dnfs.rom roms/bbcint/ibos.rom \
		roms/bbcint/os12.rom roms/bbcint/wdfs.rom \
		\
		roms/bplus/adfs-1.30.rom roms/bplus/b+mos.rom roms/bplus/basic2.rom \
		roms/bplus/dfs-2.26.rom roms/bplus/wdfs.rom \
		\
		roms/m128/adfs.rom roms/m128/adfs1-53.rom roms/m128/anfs-4.25-2201351.rom \
		roms/m128/basic4.rom roms/m128/dfs.rom roms/m128/edit.rom \
		roms/m128/mcp122.abm roms/m128/mos.rom roms/m128/terminal.rom \
		roms/m128/view.rom roms/m128/viewsht.rom roms/m128/ats-3.0-1.rom \
		\
		roms/other/6502tube.rom roms/other/ccpn102.rom roms/other/hibasic3.rom \
		roms/other/z80.rom roms/other/bios.rom \
		\
		state/cmos.ram

EXTRA_DIST = $(pkgdata_DATA)

# $(wildcard *.meta)

install:
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/config
	cp -r $(top_srcdir)/data/config/* $(DESTDIR)$(pkgdatadir)/config
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/media
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/media/discs
	cp -r $(top_srcdir)/data/media/discs/* $(DESTDIR)$(pkgdatadir)/media/discs
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/media/scsi
	cp -r $(top_srcdir)/data/media/scsi/* $(DESTDIR)$(pkgdatadir)/media/scsi
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/media/tapes
	cp -r $(top_srcdir)/data/media/tapes/* $(DESTDIR)$(pkgdatadir)/media/tapes
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/phroms
	cp -r $(top_srcdir)/data/phroms/* $(DESTDIR)$(pkgdatadir)/phroms
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/resources
	cp -r $(top_srcdir)/data/resources/* $(DESTDIR)$(pkgdatadir)/resources
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/state
	cp -r $(top_srcdir)/data/state/* $(DESTDIR)$(pkgdatadir)/state
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/roms
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/roms/bbc
	cp -r $(top_srcdir)/data/roms/bbc/* $(DESTDIR)$(pkgdatadir)/roms/bbc
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/roms/bbcint
	cp -r roms/bbcint/* $(DESTDIR)$(pkgdatadir)/roms/bbcint
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/roms/bplus
	cp -r roms/bplus/* $(DESTDIR)$(pkgdatadir)/roms/bplus
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/roms/m128
	cp -r $(top_srcdir)/data/roms/m128/* $(DESTDIR)$(pkgdatadir)/roms/m128
#
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(pkgdatadir)/roms/other
	cp -r $(top_srcdir)/data/roms/other/* $(DESTDIR)$(pkgdatadir)/roms/other
#
	chmod -R 755 $(DESTDIR)$(pkgdatadir)

uninstall:
	rm -fv   $(DESTDIR)$(pkgdatadir)/config/econet.cfg
	rm -fv   $(DESTDIR)$(pkgdatadir)/config/phroms.cfg
	rm -fv   $(DESTDIR)$(pkgdatadir)/config/roms.cfg
	rm -fv   $(DESTDIR)$(pkgdatadir)/config/roms_torch.cfg
	rm -fv	 $(DESTDIR)$(pkgdatadir)/config/roms_bbc.cfg
	rmdir -v $(DESTDIR)$(pkgdatadir)/config
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/tapes/test.uef
	rmdir -v $(DESTDIR)$(pkgdatadir)/media/tapes
#
	rm -fv	 $(DESTDIR)$(pkgdatadir)/media/scsi/sasi0.dat
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/scsi/scsi0.dat
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/scsi/scsi0.dsc
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/scsi/scsi1.dat
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/scsi/scsi1.dsc
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/scsi/scsi2.dat
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/scsi/scsi2.dsc
	rm -fv	 $(DESTDIR)$(pkgdatadir)/media/scsi/scsi3.dat
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/scsi/scsi3.dsc
	rmdir -v $(DESTDIR)$(pkgdatadir)/media/scsi
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/discs/bbcmaster512-disc1-dosplusboot.adl
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/discs/cpm_utilities_disc.dsd
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/discs/econet_level_1_utils.ssd
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/discs/econet_level_2_utils.ssd
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/discs/games.ssd
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/discs/master_welcome.adl
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/discs/test.ssd
	rm -fv   $(DESTDIR)$(pkgdatadir)/media/discs/welcome.ssd
	rmdir -v $(DESTDIR)$(pkgdatadir)/media/discs
#
	rmdir -v $(DESTDIR)$(pkgdatadir)/media
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/phroms/phroma
	rm -fv   $(DESTDIR)$(pkgdatadir)/phroms/phromsus.txt
	rm -fv   $(DESTDIR)$(pkgdatadir)/phroms/phromus
	rmdir -v $(DESTDIR)$(pkgdatadir)/phroms
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/resources/font10x16.bmp
	rm -fv   $(DESTDIR)$(pkgdatadir)/resources/font5x8.bmp
	rm -fv   $(DESTDIR)$(pkgdatadir)/resources/icon.bmp
	rm -fv   $(DESTDIR)$(pkgdatadir)/resources/relayoff.snd
	rm -fv   $(DESTDIR)$(pkgdatadir)/resources/relayon.snd
	rm -fv   $(DESTDIR)$(pkgdatadir)/resources/teletext.fnt
	rmdir -v $(DESTDIR)$(pkgdatadir)/resources
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbc/adfs-1.30.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbc/ats-3.0-1.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbc/basic2.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbc/dnfs.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbc/mcp120.cbl
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbc/os12.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbc/wdfs.rom
	rmdir -v $(DESTDIR)$(pkgdatadir)/roms/bbc
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbcint/basic2.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbcint/dnfs.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbcint/ibos.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbcint/os12.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bbcint/wdfs.rom
	rmdir -v $(DESTDIR)$(pkgdatadir)/roms/bbcint
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bplus/adfs-1.30.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bplus/b+mos.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bplus/basic2.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bplus/dfs-2.26.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/bplus/wdfs.rom
	rmdir -v $(DESTDIR)$(pkgdatadir)/roms/bplus
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/adfs.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/adfs1-53.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/anfs-4.25-2201351.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/ats-3.0-1.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/basic4.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/dfs.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/edit.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/mcp122.abm
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/mos.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/terminal.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/view.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/m128/viewsht.rom
	rmdir -v $(DESTDIR)$(pkgdatadir)/roms/m128
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/other/6502tube.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/other/bios.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/other/ccpn102.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/other/hibasic3.rom
	rm -fv   $(DESTDIR)$(pkgdatadir)/roms/other/z80.rom
	rmdir -v $(DESTDIR)$(pkgdatadir)/roms/other
#
	rmdir -v $(DESTDIR)$(pkgdatadir)/roms
#
	rm -fv   $(DESTDIR)$(pkgdatadir)/state/cmos.ram
	rmdir -v $(DESTDIR)$(pkgdatadir)/state
#
	rmdir -v $(DESTDIR)$(pkgdatadir)
