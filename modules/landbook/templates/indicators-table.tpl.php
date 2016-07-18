<div class="row">
    <div class="col-md-12">
      <div class="socioeconomic-values chart-content"><?php //pa($data['charts']['tableIndicators'],1); ?>
        <div class="table-responsive">
          <table class="reset_table c-g60" id="tindicators">
            <thead>
              <tr>
                <th class="uppc txt-s t-th fos t-th-green" data-localize="label.iname">Indicators</th>
                <th class="uppc txt-s t-th fos t-th-green txt-c" data-localize="label.year">Year</th>
                <th class="uppc txt-s t-th fos t-th-green txt-c" data-localize="label.val">Value</th>
                <th class="uppc txt-s t-th fos t-th-green" data-localize="label.unit">Unit</th>
                <th class="uppc txt-s t-th fos t-th-green" data-localize="label.dataset">Dataset/org</th>
                <th class="uppc txt-s t-th fos t-th-green txt-c" data-localize="label.remove">Remove</th>
              </tr>
            </thead>

            <tbody>
              <!-- <div class="t_indicators_body_loader"></div> -->
              <tr>
                <td class="t_indicators_body_loader r-pos" colspan="6">
                  <div class="pos_loader_data">
                    <div class="pos_spinkit">
                        <div class="sk-three-bounce no-m-bottom">
                          <div class="sk-child sk-bounce1"></div>
                          <div class="sk-child sk-bounce2"></div>
                          <div class="sk-child sk-bounce3"></div>
                        </div>
                        <p class="txt-s c-g40 uppc txt-c fos no-m-top m-xs-top" data-localize="feedback.loading">Loading data ...</p>
                    </div>
                  </div>
                </td>
              </tr>

            </tbody>

            <tfoot>
              <tr>
                <td colspan="6" class="t-tf t-tf-green txt-c txt-s fos"></td>
                <!--td class="t-tf t-tf-dkgreen txt-xs uppc fos txt-c"><a href="#">Download data</a></td-->
              </tr>
            </tfoot>
          </table>
        </div>
      </div>
    </div>
</div>
<div class="row m-l-top">
  
  <div class="col-md-4">
    <select class="sindicator fos cinput cinput-s-arrow cinput-sh cinput-gray" id="isindicators"></select>
  </div>

  <div class="col-md-4">
    <select class="syear fos cinput cinput-s-arrow cinput-sh cinput-gray cinput-disabled" id="isyear" disabled="disabled">
      <option value="0" data-localize="inputs.nosyear">No indicator selected ...</option>
    </select>
  </div>
  
  <div class="col-md-4">
    <a href="#" class="txt-s uppc txt-c cbtn cbtn-block cbtn-s-acc cbtn-s-sh2 fos cbtn-iadd-indicator" data-localize="inputs.addindicator">add indicator</a>
  </div>

</div>