testexecdir = join_paths(installed_test_bindir, 'css', 'nodes')
testdatadir = join_paths(installed_test_datadir, 'css')

test_nodes = executable('test-css-nodes', 'test-css-nodes.c',
                        c_args: common_cflags,
                        install: get_option('install-tests'),
                        install_dir: testexecdir,
                        dependencies: libgtk_dep)
test('nodes', test_nodes,
     args: [ '--tap', '-k' ],
     protocol: 'tap',
     env: [ 'GIO_USE_VOLUME_MONITOR=unix',
            'GSETTINGS_BACKEND=memory',
            'GDK_DEBUG=default-settings',
            'GTK_CSD=1',
            'G_ENABLE_DIAGNOSTIC=0',
            'G_TEST_SRCDIR=@0@'.format(meson.current_source_dir()),
            'G_TEST_BUILDDIR=@0@'.format(meson.current_build_dir())
          ],
     suite: 'css')

test_data = [
  'box.ltr.nodes',
  'box.ltr.ui',
  'box.rtl.nodes',
  'box.rtl.ui',
  'buttons.nodes',
  'buttons.ui',
  'checkbutton.ltr.nodes',
  'checkbutton.ltr.ui',
  'checkbutton.rtl.nodes',
  'checkbutton.rtl.ui',
  'combobox.nodes',
  'combobox.ui',
  'entries.nodes',
  'entries.ui',
  'expander.ltr.nodes',
  'expander.ltr.ui',
  'expander.rtl.nodes',
  'expander.rtl.ui',
  'levelbar.ltr.nodes',
  'levelbar.ltr.ui',
  'levelbar.rtl.nodes',
  'levelbar.rtl.ui',
  'notebook-arrows2.nodes',
  'notebook-arrows2.ui',
  'notebook-arrows.nodes',
  'notebook-arrows.ui',
  'notebook.bottom.ltr.nodes',
  'notebook.bottom.ltr.ui',
  'notebook.bottom.rtl.nodes',
  'notebook.bottom.rtl.ui',
  'notebook.left.ltr.nodes',
  'notebook.left.ltr.ui',
  'notebook.left.rtl.nodes',
  'notebook.left.rtl.ui',
  'notebook.right.ltr.nodes',
  'notebook.right.ltr.ui',
  'notebook.right.rtl.nodes',
  'notebook.right.rtl.ui',
  'notebook.top.ltr.nodes',
  'notebook.top.ltr.ui',
  'notebook.top.rtl.nodes',
  'notebook.top.rtl.ui',
  'paned.ltr.nodes',
  'paned.ltr.ui',
  'paned.rtl.nodes',
  'paned.rtl.ui',
  'progressbar.nodes',
  'progressbar.ui',
  'scale.nodes',
  'scale.ui',
]

if get_option('install-tests')
  conf = configuration_data()
  conf.set('libexecdir', gtk_libexecdir)
  configure_file(input: 'nodes.test.in',
                 output: 'nodes.test',
                 configuration: conf,
                 install_dir: testdatadir)

  install_data(test_data, install_dir: testexecdir)

endif
