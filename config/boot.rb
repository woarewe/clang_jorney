# frozen_string_literal: true

require 'bundler/setup'

ZEITWERK_DIRS = %w[lib].freeze

Bundler.require(:default)

inflector_class = Class.new(Zeitwerk::Inflector) do
  def camelize(basename, _absolute_path)
    case basename
    when 'cli'
      'CLI'
    else
      super
    end
  end
end

loader = Zeitwerk::Loader.new
loader.inflector = inflector_class.new
ZEITWERK_DIRS.each { |dir| loader.push_dir(dir) }
loader.setup
