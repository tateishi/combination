project('combination', 'cpp')

gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_main_dep')
gmock_dep = gtest_proj.get_variable('gmock_dep')

src = ['src/main.cc']

executable('main', sources: src)

factorial = executable(
  'factorial_test',
  sources: 'tests/factorial_test.cc',
  dependencies: gtest_dep,
  include_directories: 'src'
  )

test('test', factorial)

combination = executable(
  'combination_test',
  sources: 'tests/combination_test.cc',
  dependencies: gtest_dep,
  include_directories: 'src'
  )

test('test', combination)

prime = executable(
  'prime_test',
  sources: 'tests/prime_test.cc',
  dependencies: gtest_dep,
  include_directories: 'src'
  )

test('test', prime)
